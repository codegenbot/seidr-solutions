struct compare {
    static int ones_count(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }

    bool operator()(int a, int b) const {
        int ones_a = ones_count(a);
        int ones_b = ones_count(b);

        if (ones_a != ones_b) {
            return ones_a < ones_b;
        } else {
            return a < b;
        }
    }
};

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), compare());
    return arr;
}