```cpp
int maxVal = -1; 
for(auto p:freqMap){ 
    if(p.second>=p.first&&p.first>0)
    { 
        if(maxVal < p.second)
            maxVal=p.second;
    } 
} 
return maxVal;