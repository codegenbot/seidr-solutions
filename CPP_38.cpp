string str = "";
str += chr;
string encoded_str = encode_cyclic(str);
assert(decode_cyclic(encoded_str) == str);