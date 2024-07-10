```"""
def camel_case(s):
    if '-' not in s:
        return ''.join(word.capitalize() for word in s.split())
    else:
        result = ''
        temp = ''
        for char in s.split('-'):
            temp += char.capitalize()
            if temp != s.split('-')[-1].capitalize():
                result += temp + ' '
                temp = ''
        result += temp
        return result.strip()