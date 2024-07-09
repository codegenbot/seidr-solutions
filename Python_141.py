```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    dot_index = file_name.find('.')
    if dot_index == -1 or file_name[:dot_index].isalpha() == False:
        return 'No'
    after_dot = file_name[dot_index+1:]
    allowed_extensions = ['txt', 'exe', 'dll']
    if after_dot not in allowed_extensions:
        return 'No'
    return 'Yes'