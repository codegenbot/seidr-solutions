// Convert N to binary string
    string binaryStr = bitset<32>(N).to_string();

    // Count total sum of digits in binary
    int sum = 0;
    for(char digit : binaryStr)
    {
        if(digit == '1')
        {
            sum++;
        }
    }

    // Return the sum of digits in binary as a string
    return bitset<32>(sum).to_string();