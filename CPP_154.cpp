int n = a.size(), m = b.size();
if (n != m) return false;
string temp = b + b;
return (temp.find(a) != string::npos);
}