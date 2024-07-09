using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of <int>(a)) {
        if (is_any_of <float>(b)) return b;
        else if (is_any_of <string>(b)) {
            float fa = any_cast<int>(a);
            string fb = any_cast<string>(b);
            if (fa > atof(fb.c_str())) return a;
            else if (fa < atof(fb.c_str())) return b;
            else return boost::any("None");
        }
    } 
    else if (is_any_of <float>(a)) {
        if (is_any_of <int>(b)) return a;
        else if (is_any_of <string>(b)) {
            float fa = any_cast<float>(a);
            string fb = any_cast<string>(b);
            if (fa > atof(fb.c_str())) return a;
            else if (fa < atof(fb.c_str())) return b;
            else return boost::any("None");
        }
    } 
    else if (is_any_of <string>(a)) {
        if (is_any_of <int>(b)) {
            float fa = atof(any_cast<string>(a).c_str());
            int fb = any_cast<int>(b);
            if (fa > fb) return a;
            else if (fa < fb) return b;
            else return boost::any("None");
        } 
        else if (is_any_of <float>(b)) {
            float fa = atof(any_cast<string>(a).c_str());
            float fb = any_cast<float>(b);
            if (fa > fb) return a;
            else if (fa < fb) return b;
            else return boost::any("None");
        } 
        else if (is_any_of <string>(b)) {
            string fa = any_cast<string>(a);
            string fb = any_cast<string>(b);
            if (atof(fa.c_str()) > atof(fb.c_str())) return a;
            else if (atof(fa.c_str()) < atof(fb.c_str())) return b;
            else return boost::any("None");
        }
    }

    return boost::any();
}