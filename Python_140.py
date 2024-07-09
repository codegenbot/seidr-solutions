
import re

def fix_spaces():
    text = input().strip()  # Input is expected to be provided without leading/trailing whitespaces
    return re.sub(r'\s{2,}', '-', text.replace(' ', '_'))