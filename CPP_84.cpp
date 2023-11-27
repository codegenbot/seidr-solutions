#include <bitset>

string solve(int N) {
    int sum = 0;
    
    // convert N to binary using bitset
    bitset<32> binary(N);
    
    // calculate the sum of digits in binary representation
    for (int i = 0; i < 32; i++) {
        sum += binary[i];
    }
    
    // convert the sum to binary string
    string binaryString = bitset<32>(sum).to_string();
    
    // remove leading zeros
    binaryString.erase(0, binaryString.find_first_not_of('0'));
    
    return binaryString;
}