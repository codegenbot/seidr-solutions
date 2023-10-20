#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int min = INT_MAX;
    int min_index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) < min)
        {
            min = abs(v[i] - v[i + 1]);
            min_index = i;
        }
    }
    cout << min_index + 1 << endl;
    for (int i = 0; i <= min_index; i++)
        cout << v[i] << " ";
    cout << endl;
    cout << n - min_index - 1 << endl;
    for (int i = min_index + 1; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
