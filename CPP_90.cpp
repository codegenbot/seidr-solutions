if(lst.size() < 2) return -1; // Using -1 to indicate 'None'
sort(lst.begin(), lst.end());
int first = lst[0];
for(int i = 1; i < lst.size(); ++i) {
    if(lst[i] != first) {
        return lst[i];
    }
}
return -1; // If no second smallest element is found
}