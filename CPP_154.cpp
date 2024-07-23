for(int i=0;i<b.length();i++){
        if(a.find(b)!=string::npos) return true;
        b=b.substr(1)+b[0];
    }
    return false;
}