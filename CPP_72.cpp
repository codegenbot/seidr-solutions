Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    vector<string> qStr;
    for (int i = 0; i < q.size(); i++) {
        ostringstream oss;
        oss << q[i];
        qStr.push_back(oss.str());
    }
    
    string str = "";
    for (int i = qStr.size() - 1; i >= 0; i--) {
        str += qStr[i];
    }
    
    if (str != string(q.begin(), q.end())) {
        return false;
    } else {
        int sum = 0;
        for (int i = 0; i < q.size(); i++) {
            sum += q[i];
        }
        
        if (sum <= w) {
            return true;
        } else {
            return false;
        }
    }
}