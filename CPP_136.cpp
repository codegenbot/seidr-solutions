std::vector<int> largest_smallest_integer(std::vector<int> lst) {
	    std::vector<int> result = {INT_MIN, INT_MAX};
	    int max_neg = INT_MIN;
	    int min_pos = INT_MAX;
	    
	    for(int num : lst){
	        if(num < 0 && num > max_neg){
	            max_neg = num;
	        } else if(num > 0 && num < min_pos){
	            min_pos = num;
	        }
	    }
	    
	    result[0] = max_neg == INT_MIN ? 0 : max_neg;
	    result[1] = min_pos == INT_MAX ? 0 : min_pos;
	    
	    return result;
	}