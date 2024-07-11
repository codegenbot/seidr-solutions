```
'def separate_paren_groups(paren_string: str) -> List[str]:\n'\
'    result = []\n'\
'    stack = []\n'\
'    groups = []\n'\
'\n'\
'    for char in paren_string:\n'\
'        if char == " ": \n'\
'            continue\n'\
'        if char in ["(", "[", "{"]:\n'\
'            stack.append(char)\n'\
'            groups.append("")\n'\
'        elif char in {")": ")", "]": "[", "}": "{"}[char]:\n'\
'            if stack: \n'\
'                top = stack.pop()\n'\
'                groups[-1] += char\n'\
'                if not stack and {")": ")", "]": "[", "}": "{"}[char] == {")": ")", "]": "[", "}": "{"}[top]:\n'\
'                    result.append(groups.pop().lstrip().rstrip())\n'\
'            else:\n'\
'                while stack and (stack[-1] in ["(", "["] and {")": ")", "]": "[", "}": "{"}[char] != {"(": ")","[": ']', "{': '}'}[stack[-1]]:\n'\
'                    stack.pop()\n'\
'                if not stack and {")": ")", "]": "[", "}": "{"}[char] == {")": ")", "]": "[", "}": "{"}["({".index(top)]:\n'\
'                    result.append(groups.pop().lstrip().rstrip())\n'\
'    return result\n'