```cpp
int n;
cin >> n;
vector<int> result = get_odd_collatz(n);
sort(result.begin(), result.end());
cout << "The Collatz Conjecture sequence for " << n << " is: ";
for (int i : result) {
    cout << i << " ";
}
cout << endl;
return 0;