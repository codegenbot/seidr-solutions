int cutIndex = n / 2; // Calculate cut position
for (int i = 0; i <= cutIndex; i++) cout << nums[i] << " "; // Output left subvector
cout << endl;
for (int i = cutIndex + 1; i < n; i++) cout << nums[i] << " "; // Output right subvector
cout << endl;