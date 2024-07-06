```
class Solution:
    def ispalindrome(self, string: str) -> bool:
        return string == string[::-1]
    
    def make_palindrome(self, string: str) -> str:
        if self.is_palindrome(string):
            return string + string[::-1]
        else:
            for i in range(len(string), -1, -1):
                if self.is_palindrome(string[:i]) and self.is_palindrome(string[i:]):
                    return string[:i] + string[i:][::-1]
            return string + string[::-1]