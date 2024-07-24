#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class MD5 {
public:
    MD5(string text) : text_(text) {}

    string hash() {
        stringstream ss;
        for (int i = 0; i < text_.size(); i++) {
            ss << setfill('0') << setw(2) << hex << (int)(text_[i]);
        }
        return ss.str();
    }

private:
    string text_;
};

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md(text);

    return md.hash();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}