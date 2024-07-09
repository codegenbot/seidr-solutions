using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_pointer<a>()) {
        float* af = any_cast<float*>(a.get());
        float* bf = any_cast<float*>(b.get());
        return af > bf ? a : (af < bf ? b : boost::any("None")));
    } else if (is_pointer<b>()) {
        float* af = any_cast<float*>(a.get());
        float* bf = any_cast<float*>(b.get());
        return af > bf ? a : (af < bf ? b : boost::any("None")));
    } else {
        string as = any_cast<string>(a);
        string bs = any_cast<string>(b);
        istringstream isas(as);
        istringstream isbs(bs);
        float fa, fb;
        isas >> fa;
        isbs >> fb;
        return fa > fb ? a : (fa < fb ? b : boost::any("None")));
    }
}