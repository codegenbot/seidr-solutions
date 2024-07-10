bool any_int(float a, float b, float c) {
    std::string sai = std::to_string((int)a);
    std::string sbi = std::to_string((int)b);
    std::string sci = std::to_string((int)c);

    if ((sai == sbi + sci) || (sai == sbi - sci) || (sai == sci + sbi) || (sai == sci - sbi))
        return true;
    else
        return false;
}