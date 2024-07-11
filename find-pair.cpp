for (int i = 0; i < n; ++i) {
    if (mp.find(target - nums[i]) != mp.end()) {
        std::cout << nums[i] << " " << target - nums[i] << std::endl;
        break;
    }
    mp[nums[i]] = i;
}