```
def file_name_check(file_name):
    if '.' not in file_name or len(file_name.split('.')[0]) > 1 or not file_name[0].isalpha() or len([i for i in file_name if i.isdigit()]) > 3 or file_name.split('.')[1].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    else:
        return 'Yes'