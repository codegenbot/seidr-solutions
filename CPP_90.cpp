```c++
int next_smallest(std::vector<int> lst){
    if(lst.empty()) return -1; 
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(),sorted_lst.end());
    int count = 0;
    for(int i=0;i<sorted_lst.size();i++){
        if(sorted_lst[i] != lst[0]){
            if(count == 1) return sorted_lst[i];
            count++;
        }
    }
    return -1; 
}