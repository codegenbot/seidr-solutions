if (a.type() == typeid(int) && b.type() == typeid(int))
    return a.convert_to<int>() > b.convert_to<int>() ? a : b == a ? boost::any("None") : b;
else if (a.type() == typeid(double) && b.type() == typeid(double))
    return a.convert_to<double>() > b.convert_to<double>() ? a : b == a ? boost::any("None") : b;
else if (a.type() == typeid(string) && b.type() == typeid(string))
{
    string sa = a.convert_to<string>();
    string sb = b.convert_to<string>();

    size_t pos1 = 0, pos2 = 0;
    while ((pos1 = sa.find('.')) != std::string::npos || (pos2 = sb.find('.')) != std::string::npos)
    {
        if (pos1 < 0 && pos2 > 0) return b;
        else if (pos2 < 0 && pos1 > 0) return a;
        sa.erase(pos1, 1);
        sb.erase(pos2, 1);
    }
    return sa > sb ? a : b == a ? boost::any("None") : b;
}
else
    return boost::any();