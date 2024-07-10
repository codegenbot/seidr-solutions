bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;

    // Remove strings with odd lengths from the input list and store them in 'result'
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the 'result' vector by length of each word
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) { return a.length() < b.length(); });

    // If two words have the same length, sort alphabetically
    std::stable_partition(result.begin(), result.end(), 
        [len](const string& str) { return str.length() == len; });

    vector<string> sum;
    for(int i=0; i<result.size()-1; i++) {
        if(issame({result[i]}, {result[i+1]})) {
            string temp = result[i];
            int carry = 0;
            for(char& c : temp) {
                if(carry > 0) {
                    c += 1;
                    carry--;
                    if(c > '9') {
                        c = '0';
                        carry++;
                    }
                } else {
                    break;
                }
            }
            sum.push_back(temp);
        } else {
            sum.push_back(result[i]);
        }
    }
    sum.push_back(result.back());
    
    return sum;
}