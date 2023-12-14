

<<REPL>>
import re
def kebab2camelCase(string):
    # WRITE CODE HERE
    return re.sub(r'-(\w)', lambda x:x.group(1).upper(), string.split()[0]).strip() + ' ' + re.sub(r'-(\w)', lambda x:x.group(1).upper(), string.split()[1]).strip()
<<REPL>>

<<SAW>>
import re
def kebab2camelCase(string):
    # WRITE CODE HERE
    return re.sub(r'-(\w)', lambda x:x.group(1).upper(), string.split()[0]).strip() + ' ' + re.sub(r'-(\w)', lambda x:x.group(1).upper(), string.split()[1]).strip()
<<SAW>>
