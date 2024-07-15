```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    dot_index = file_name.find('.')
    if dot_index == -1 or file_name[:dot_index].isalpha() == False or len(file_name.split('.')) != 2:
        return 'No'
    extension = file_name.split('.')[-1]
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'