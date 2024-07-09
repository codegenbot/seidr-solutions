bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end(), [](int x, int y){
        int sum_x = 0, sum_y = 0;
        int temp_x = abs(x), temp_y = abs(y);
        while(temp_x > 0){
            sum_x += temp_x % 10;
            temp_x /= 10;
        }
        while(temp_y > 0){
            sum_y += temp_y % 10;
            temp_y /= 10;
        }
        if(sum_x == sum_y){
            return a.find(x) < a.find(y);
        }
        return sum_x < sum_y;
    });
    return a == b;
}

int main(){
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}