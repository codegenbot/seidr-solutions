for(int i=0; i<a.length(); i++){
        if(a.substr(i) + a.substr(0, i) == b || a.substr(i) + a.substr(0, i) == string(b.rbegin(), b.rend()))
            return true;
    }
    return false;
}