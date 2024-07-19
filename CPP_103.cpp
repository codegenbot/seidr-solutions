string binary_avg = bitset<32>(avg).to_string();
int idx = binary_avg.find('1');
return binary_avg.substr(idx);