```
import re

def validate_and_capitalize(new_text):
    print(f"{'' if re.match(r'^[a-zA-Z_]+$', new_text) else new_text.capitalize()}"