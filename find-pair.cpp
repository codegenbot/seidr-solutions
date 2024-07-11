if (numMap.find(complement) != numMap.end()) {
    int min = (nums[i] < complement ? nums[i] : complement);
    int max = (nums[i] > complement ? nums[i] : complement);
    return {min, max};
}