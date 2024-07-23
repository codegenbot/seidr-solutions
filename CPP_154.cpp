int n = a.size();
int m = b.size();
if (n != m) return false;
string doublea = a + a;
return doublea.find(b) != string::npos;
}