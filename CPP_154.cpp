int n = a.size();
int m = b.size();
if(n != m) return false;
string concat = a + a;
return concat.find(b) != string::npos;
}