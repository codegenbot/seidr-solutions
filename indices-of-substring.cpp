
/*
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
*/

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.size() && i + j < text.size() && text[i + j] == target[j]) {
                j++;
            }
            if (j == target.size()) {
                indices.push_back(i);
            }
        }
    }
    return indices;
}