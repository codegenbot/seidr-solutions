string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [&] (const string& a, const string& b) {
            int uniqueA = a.size();
            int uniqueB = b.size();
            for(int i=0; i<a.size(); ++i)
                if(a[i] > ' ')
                    ++uniqueA;
            for(int i=0; i<b.size(); ++i)
                if(b[i] > ' ')
                    ++uniqueB;
            if(uniqueA == uniqueB) 
                return a < b;
            return uniqueA > uniqueB;
        });
    return result;
}