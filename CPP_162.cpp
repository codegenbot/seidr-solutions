#include <string>
#include <algorithm>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char *buf = reinterpret_cast<unsigned char*>(text.c_str());
    size_t len = text.length();

    MD5 md;
    md.Update(buf, len);
    string result = hexEncoder().CalculateString(md.Digest());

    return result;
}