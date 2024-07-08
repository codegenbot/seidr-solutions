```cpp
int main() {
    boost::any a = boost::any(1);
    boost::any b = boost::any("2");
    try {
        if (a.type() == boost::any::typeclass<int> && 
            b.type() == boost::any::typeclass<string>) {
            if (boost::get<int>(a) > boost::get<string>(b)) {
                return a;
            } else if (boost::get<int>(a) < boost::get<string>(b)) {
                return b;
            } else {
                throw invalid_argument("Invalid types");
            }
        } else {
            throw invalid_argument("Invalid types");
        }
    } catch (invalid_argument &e) {
        cerr << e.what() << endl;
        return 1;
    }
}