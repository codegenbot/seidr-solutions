[PYTHON]
def compare_one(a: boost::any, b: boost::any) -> std::string:
    if a.index() == 0:
        x = get<0>(a)
        if b.index() == 1:
            y = get<1>(b)
            return to_string((x > y) ? a : b)
        elif b.index() == 2:
            s = get<2>(b)
            try:
                y = stof(s)
                return to_string((x > y) ? a : b)
            except invalid_argument as e:
                return "None"
        else:
            return "None"
    elif a.index() == 1:
        x = get<1>(a)
        if b.index() == 0:
            y = get<0>(b)
            return to_string((x > y) ? a : b)
        elif b.index() == 2:
            s = get<2>(b)
            try:
                y = stof(s)
                return to_string((x > y) ? a : b)
            except invalid_argument as e:
                return "None"
        else:
            return "None"
    elif a.index() == 2:
        s = get<2>(a)
        try:
            x = stof(s)
            if b.index() == 0:
                y = get<0>(b)
                return to_string((x > y) ? a : b)
            elif b.index() == 1:
                y = get<1>(b)
                return to_string((x > y) ? a : b)
            else:
                return "None"
        except invalid_argument as e:
            return "None"
    else:
        return "None"
[/PYTHON]
[TESTS]
# Test case 1:
assert compare_one(boost::any(10), boost::any(2.5)) == "2.5"
# Test case 2:
assert compare_one(boost::any(2.5), boost::any(10)) == "10"
# Test case 3:
assert compare_one(boost::any("hello"), boost::any("world")) == "world"
[/TESTS]
```