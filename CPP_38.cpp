str += chr; // Fixed += instead of = 
assert(decode_cyclic(encoded_str) == str); // Moved the assert after calculating encode_str