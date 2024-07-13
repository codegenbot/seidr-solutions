int do_algebra(vector<string> operato, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operato.size(); i++) {
        expression += to_string(operand[i]);
        expression += operato[i];
    }
    expression += to_string(operand[operato.size()]);
    
    int result = eval(expression.c_str());
    
    return result;
}

long long eval(char* s) {
    char *p, *q;
    double d;

    p = q = (char*)s;
    while (*p) {
        if (!strncasecmp(p, "MATH::pow", 10)) {
            *q++ = ' ';
            sscanf(p, "MATH::pow %lf", &d);
            *q++ = 'p';
            *q++ = 'o';
            *q++ = 'w';
            p += 8;
        } else if (!strncasecmp(p, "MATH::sqrt", 9)) {
            *q++ = ' ';
            sscanf(p, "MATH::sqrt %lf", &d);
            *q++ = 's';
            *q++ = 'q';
            *q++ = 'r';
            p += 7;
        } else if (!strncasecmp(p, "MATH::log", 6)) {
            *q++ = ' ';
            sscanf(p, "MATH::log %lf", &d);
            *q++ = 'l';
            *q++ = 'o';
            *q++ = 'g';
            p += 5;
        } else if (!strncasecmp(p, "MATH::abs", 6)) {
            *q++ = ' ';
            sscanf(p, "MATH::abs %lf", &d);
            *q++ = 'a';
            *q++ = 'b';
            *q++ = 's';
            p += 5;
        } else if (!strncasecmp(p, "MATH::sin", 6)) {
            *q++ = ' ';
            sscanf(p, "MATH::sin %lf", &d);
            *q++ = 's';
            *q++ = 'i';
            *q++ = 'n';
            p += 5;
        } else if (!strncasecmp(p, "MATH::cos", 6)) {
            *q++ = ' ';
            sscanf(p, "MATH::cos %lf", &d);
            *q++ = 'c';
            *q++ = 'o';
            *q++ = 's';
            p += 5;
        } else if (!strncasecmp(p, "MATH::tan", 6)) {
            *q++ = ' ';
            sscanf(p, "MATH::tan %lf", &d);
            *q++ = 't';
            *q++ = 'a';
            *q++ = 'n';
            p += 5;
        } else if (!strncasecmp(p, "MATH::asin", 7)) {
            *q++ = ' ';
            sscanf(p, "MATH::asin %lf", &d);
            *q++ = 'a';
            *q++ = 's';
            *q++ = 'i';
            *q++ = 'n';
            p += 6;
        } else if (!strncasecmp(p, "MATH::acos", 7)) {
            *q++ = ' ';
            sscanf(p, "MATH::acos %lf", &d);
            *q++ = 'a';
            *q++ = 'c';
            *q++ = 'o';
            *q++ = 's';
            p += 6;
        } else if (!strncasecmp(p, "MATH::atan", 7)) {
            *q++ = ' ';
            sscanf(p, "MATH::atan %lf", &d);
            *q++ = 'a';
            *q++ = 't';
            *q++ = 'a';
            *q++ = 'n';
            p += 6;
        } else if (!strncasecmp(p, "MATH::log10", 8)) {
            *q++ = ' ';
            sscanf(p, "MATH::log10 %lf", &d);
            *q++ = 'l';
            *q++ = 'o';
            *q++ = 'g';
            *q++ = '1';
            *q++ = '0';
            p += 7;
        } else if (!strncasecmp(p, "MATH::exp", 5)) {
            *q++ = ' ';
            sscanf(p, "MATH::exp %lf", &d);
            *q++ = 'e';
            *q++ = 'x';
            *q++ = 'p';
            p += 4;
        } else if (!strncasecmp(p, "MATH::floor", 7)) {
            *q++ = ' ';
            sscanf(p, "MATH::floor %lf", &d);
            *q++ = 'f';
            *q++ = 'l';
            *q++ = 'o';
            *q++ = 'o';
            *q++ = 'r';
            p += 6;
        } else {
            while (*p != '(' && *p != ')') {
                *q++ = *p++;
            }
        }
    }
    *q++ = '\0';
    
    return (int)std::stold(s);
}