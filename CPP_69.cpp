int maxFreq = -1;
for (auto p : count) {
    if(p.second > 0 && p.second > maxFreq) 
        maxFreq = p.second; 
}
return *count.rbegin()->first;