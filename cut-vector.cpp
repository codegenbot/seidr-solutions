if (n % 2 == 0) {
    sum *= 2; // Adjusting the total sum for even number of elements
}

cout << "2" << endl;

for (int i = 0; i <= cutIndex; i++) {
    cout << nums[i] << " ";
}
cout << endl;
for (int i = cutIndex; i < n; i++) {
    cout << nums[i] << " ";
}