if(a == b)
    return "None";

if(a.type() == typeid(int))
    return max(boost::any_cast<int>(a), boost::any_cast<int>(b));
if(a.type() == typeid(float))
    return max(boost::any_cast<float>(a), boost::any_cast<float>(b));

string sa = boost::any_cast<string>(a);
string sb = boost::any_cast<string>(b);

replace(sa.begin(), sa.end(), ',', '.');
replace(sb.begin(), sb.end(), ',', '.');

return max(stof(sa), stof(sb));
}