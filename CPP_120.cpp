Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    copy_n(istream_iterator<int>(istringstream(join(rbegin(arr),rend(arr)," "))),k,res.begin());
    sort(res.begin(),res.end());
    return res;
}