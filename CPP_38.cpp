string str; // Declare 'str' before using it
str += chr; // Fixed += instead of = 
string encoded_str = encode_cyclic(str); // Declare 'encoded_str' and calculate its value
assert(decode_cyclic(encoded_str) == str); // Move the assert after calculating 'encoded_str'