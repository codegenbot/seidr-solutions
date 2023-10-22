#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
#define INF 0x3f3f3f3f
#define FOR(i, n) for(int i = 0; i < n; i++)
#define REP(i, n) for(int i = n-1; i >= 0; i--)
#define FOR1(i, n) for(int i = 1; i <= n; i++)
#define REP1(i, n) for(int i = n; i > 0; i--)
#define pb push_back
#define fi first
#define se second
#define sz(x) int(x.size())
#define all(x) x.begin(),x.end()
#define mset(x, y) memset(&x, (y), sizeof x)
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

int find(string s, string t) {
	int n = s.length(), m = t.length();
	if (m > n) return -1;
	for (int i = 0; i <= n-m; i++) {
		int j = 0;
		for (j = 0; j < m; j++) {
			if (s[i+j] != t[j]) break;
		}
		if (j == m) return i;
	}
	return -1;
}

int main() {
	string s, t;
	while (cin >> s >> t) {
		int i = 0, j = 0;
		while (i+j < s.length()) {
			if (s[i+j] == t[j]) {
				j++;
				if (j == t.length()) {
					printf("%d ", i);
					i++;
					j = 0;
				}
			} else {
				i++;
				j = 0;
			}
		}
		puts("");
	}
	return 0;
}
