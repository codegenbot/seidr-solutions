#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
#define MAX_BUFFER 131072
unsigned char buf[MAX_BUFFER];
size_t _filelen;
unsigned char* _buf;
bool buf_empty = true;
size_t buf_pos = 0;
inline char _read() {
	if (buf_pos == _filelen) {
		buf_pos = 0;
		buf_empty = true;
	}
	return buf[buf_pos++];
	//return getchar();
}
inline int read_int() {
	char c = _read();
	while (c <= 32) c = _read();
	int ret = 0;
	while (c > 32) {
		ret = 10 * ret + (c&15);
		c = _read();
	}
	return ret;
}
inline void read_range_helper(const int start, int cnt, vector <int> &res, const int offset) {
	if (buf_empty) buf_pos = 0, buf_empty = false, _filelen = fread(buf, 1, MAX_BUFFER, stdin);
	const int maxpos = offset + cnt;
	int curid = start;
	start -= offset;
	for (int i = offset; i<maxpos; i++) {
		while (buf_empty) buf_pos = 0, buf_empty = false, _filelen = fread(buf, 1, MAX_BUFFER, stdin), cnt -= i - offset;
		res[curid] = read_int();
		while (buf_empty) buf_pos = 0, buf_empty = false, _filelen = fread(buf, 1, MAX_BUFFER, stdin), curid++;
	}
}
inline vector<int> read_n_ints(const int n) {
	int offset, chunk_cnt, other_chunk_cnt;
	vector<int> res(n);
	chunk_cnt = n / MAX_BUFFER;
	other_chunk_cnt = n%MAX_BUFFER;
	// if (chunk_cnt > 0) {
	//	 for (int i = 0; i < chunk_cnt; i++) {
	//		 read_range_helper(i*MAX_BUFFER, MAX_BUFFER, res, i*MAX_BUFFER);
	//	 }
	//	 // if (other_chunk_cnt > 0) offset = chunk_cnt * MAX_BUFFER;
	//}
	// read_range_helper(offset, other_chunk_cnt, res, offset);
	buf_empty = 1;
	_buf = buf;
	// buf_position = 0;
	// buffer_size = fread(buf, 1, MAX_BUFFER, stdin);
	_filelen = fread(buf, 1, MAX_BUFFER, stdin);
	for (int i = 0; i < n; i++) {
		while (_buf[buf_pos] <= 32) buf_pos++;
		unsigned char c = _buf[buf_pos];
		//while ((c=buf[buf_pos++])<=32 && c);
		int tmp = 0;
		while (c>32) {
			tmp = 10 * tmp + (c & 15);
			// if (buf_pos == buffer_size) {
			//	 buf_pos = 0;
			//	 buffer_size = fread(buf, 1, MAX_BUFFER, stdin);
			if (buf_pos == _filelen) {
				buf_pos = 0;
				_filelen = fread(buf, 1, MAX_BUFFER, stdin);
			}
			c = _buf[buf_pos++];
		}
		res[i] = tmp;
	}
	return res;
}
/*
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:
2
output:
7
15
input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
int main() {
	int test = read_int();
	vector<int> test_cases = read_n_ints(test);
	for (auto t_c : test_cases) {

	}
	return 0;
}
