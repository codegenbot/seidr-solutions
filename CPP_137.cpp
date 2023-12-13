[PYTHON]
def compare_one(a: variant<int, string>, b: variant<int, string>) -> str:
    if a.index() == 0 and b.index() == 1:
        return std::to_string(get<0>(a))
    elif a.index() == 1 and b.index() == 2:
        return std::to_string(get<1>(a))
    else:
        return "None"
[/PYTHON]
[TESTS]
# Test case 1:
BOOST_ASSERT(compare_one(variant<int, string>(10), variant<int, string>(2.5)) == "2.5")
# Test case 2:
BOOST_ASSERT(compare_one(variant<int, string>(2.5), variant<int, string>(10)) == "10")
# Test case 3:
BOOST_ASSERT(compare_one(variant<int, string>("hello"), variant<int, string>("world")) == "world")
[/TESTS]
```