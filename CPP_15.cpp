string result;
for(int i = 0; i <= n; ++i){
    result += to_string(i) + " ";
}
result.pop_back(); // Remove the last space
return result;
}