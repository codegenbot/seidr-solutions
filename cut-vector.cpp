cout << "[";
for (const auto &num : result[0]) {
    cout << num << " ";
}
cout << "] [";
for (int i = 0; i < result[1].size(); i++) {
    cout << result[1][i] << " ";
}
cout << "] ]" << endl;