if(n > m) {
    return "-1";
}

int sum = 0;
for(int i = n; i <= m; i++) sum += i;

int avg = round((double)sum / (m - n + 1));
string ans = "";
while(avg > 0) {
    ans = to_string(avg % 2) + ans;
    avg /= 2;
}

return ans.empty() ? "0" : ans;
}