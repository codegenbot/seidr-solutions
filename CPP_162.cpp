#include <CryptoPP/MD5.h>
#include <sstream>
#include <iomanip>

using namespace std;
using namespace CryptoPP;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md;
    byte digest[16];
    md.Update((const byte*)text.c_str(), (int)text.length());
    md.Final(digest);

    stringstream ss;
    HexEncoder encoder;
    encoder.Attach(ss);
    encoder.Put(digest, sizeof(digest));
    encoder.MessageEnd();

    return ss.str();
}